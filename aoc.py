from importlib import import_module
import sys

if __name__=="__main__":
    if len(sys.argv) < 2:
        print("Provide a day")
        sys.exit(1)
    try:
        day = int(sys.argv[1])
    except ValueError:
        print("Must be a numerical day of December")
        sys.exit(1)


    try:
        # This assumes you have files named day1.py, day2.py, etc.
        sys.path.append('./solutions')
        day_module = import_module(f'{day}')
        solve = getattr(day_module, 'solve', None)
        if solve is None:
            print(f"Day {day} solution file exists but has no solve function")
            sys.exit(1)
        with open(f'input/{day}.txt', 'r') as f:
            input = f.readlines()
        result = solve(input)
        if result is None:
            print(f"Could not solve for day: {day}")
            sys.exit(1)
        print(f'Day {day} solution: {result}')
    except ImportError as e:
        print(e)
        print(f"No solution file found for day {day}")
        sys.exit(1)


