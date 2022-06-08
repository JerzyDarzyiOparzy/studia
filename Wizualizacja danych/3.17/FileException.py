# 'catching' an error when file is not found

import sys
try:
    f = open('myfilename.dat', 'r')
except FileNotFoundError:
    print("The file could not be found. " +
          "This program stops here.")
    sys.exit(1)

# te instrukcje zostana wykonane w przypadku, gdy w programie nie nastapi blad.
for line in f:
    print(line, end='')
f.close()

# Alternative solution
import sys

try:
    f = open('myfilename.dat', 'r')
except OSError as error:
    print("The file could not be found. " +
          "This program stops here.")
    print("Details: {}".format(error))
    sys.exit(1)

for line in f:
    print(line, end='')
f.close()

# To raise a ValueError exception, we use
raise ValueError("Message")
# And can attach a message "Message" to that exception which can be seen when the exception is reported or caught
