# Threading
# Best for: I/O-bound tasks (e.g., file I/O, network requests).
# How it works: Uses threads within the same process to perform tasks concurrently.
# Key module: threading.

import threading

def print_numbers():
    for i in range(5):
        print(i)

if __name__ == "__main__":
    thread = threading.Thread(target=print_numbers)
    thread.start()
    thread.join()
