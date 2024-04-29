import heapq
import sys

def dijkstra(start, end, vertex, graph):
    heap = [(0, start)]
    INF = float('inf')
    weights = [INF] * (vertex + 1)
    weights[start] = 0

    while heap:
        weight, node = heapq.heappop(heap)
        if weight > weights[node]:
            continue

        for n, w in graph.get(node, []):
            W = weight + w
            if weights[n] > W:
                weights[n] = W
                heapq.heappush(heap, (W, n))

    return weights[end]

vertex = int(sys.stdin.readline())
edge = int(sys.stdin.readline())

graph = {}

for _ in range(edge):
    src, dst, weight = map(int, sys.stdin.readline().split())
    if src not in graph:
        graph[src] = []
    graph[src].append((dst, weight))

start, end = map(int, sys.stdin.readline().split())

result = dijkstra(start, end, vertex, graph)
print(result)