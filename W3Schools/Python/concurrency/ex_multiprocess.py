# Multiprocessing
# Best for: CPU-bound tasks (e.g., heavy computations).
# How it works: Spawns multiple processes, each with its own memory space.
# Key module: multiprocessing.

from multiprocessing import Process

def compute():
    print("Performing computation")

if __name__ == "__main__":
    process = Process(target=compute)
    process.start()
    process.join()
