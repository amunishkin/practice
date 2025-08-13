# Asyncio (Asynchronous Programming)
# Best for: I/O-bound tasks requiring high scalability (e.g., handling many network requests).
# How it works: Uses an event loop to manage tasks asynchronously.
# Key module: asyncio.

import asyncio

async def say_hello():
    print("Hello")
    await asyncio.sleep(1)
    print("World")

if __name__ == "__main__":
    asyncio.run(say_hello())
