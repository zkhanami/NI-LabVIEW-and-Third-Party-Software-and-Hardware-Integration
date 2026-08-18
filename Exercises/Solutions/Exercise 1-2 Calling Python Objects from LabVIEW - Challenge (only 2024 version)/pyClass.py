# Define a class for incrementing a number by a fixed value
class IncrementClass:
    def __init__(self, i):
        # Initialize the object with the increment value 'i'
        self.i = i

    def increment(self, a):
        # Add the stored increment value to the input 'a' and return the result
        res = a + self.i
        return res

# Function to use an IncrementClass object to increment a number
def NumberForIncrement(obj, a):
    # Call the increment method of the object with input 'a'
    s = obj.increment(a)
    return s

# Functionto initialize an IncrementClass object with a given value
def ObjInitialize(i):
    # Create and return an instance of IncrementClass with increment value 'i'
    obj = IncrementClass(i)
    return obj