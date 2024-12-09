try:
    length = float(input("Enter the length of the rectangle: "))
    breadth = float(input("Enter the breadth of the rectangle: "))

    if length <= 0 or breadth <= 0:
        raise ValueError("Length and breadth must be positive values.")

    perimeter = 2 * (length + breadth)
    print(f"The perimeter of the rectangle is: {perimeter:.2f}")
except ValueError as e:
    print(f"Error: {e}")
