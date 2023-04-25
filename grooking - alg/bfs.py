#breadth first search (BFS)
from collections import deque




graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "pegyy"]
graph["alice"] = ["pegy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []


print(graph)

search_queue = deque()
search_queue += graph["you"]

print(search_queue)


