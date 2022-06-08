def my_complicated_function(x):
    message = "Called with x={}".format(x)
    raise NotImplementedError(message)


print(my_complicated_function(42))
