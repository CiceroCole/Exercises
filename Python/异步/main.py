import asyncio
import aiohttp
import time
from urllib.request import urlopen

url_ = "https://www.baidu.com/"


async def get_response(session, url):
    async with session.get(url) as response:
        return await response.text()
    ...


async def request(loop, url):
    async with aiohttp.ClientSession() as session:
        tasks = [asyncio.create_task(get_response(session, url)) for i in range(100)]
        # print(tasks)
        fnish, unfnish = await asyncio.wait(tasks)
        # get_response(session, url)
        for task in fnish:
            print(task.result())
    ...


def request2():
    for i in range(100):
        urlopen(url_)


if __name__ == "__main__":
    start = time.time()
    # request2()
    loop = asyncio.get_event_loop()
    loop.run_until_complete(request(loop, url_))
    print(time.time() - start)
