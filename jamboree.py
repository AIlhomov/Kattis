def can_distribute(items, M, max_load):
    i, j = 0, len(items) - 1
    count = 0
    
    while i <= j:
        if items[i] > max_load:
            return False
        if items[i] + items[j] <= max_load:
            j -= 1
        i += 1
        count += 1
        if count > M:
            return False
    return True

def solve(N, M, items):
    items.sort(reverse=True)
    low, high = max(items), sum(items)  #lower bound

    while low < high:
        mid = (low + high) // 2
        if can_distribute(items, M, mid):
            high = mid
        else:
            low = mid + 1

    return low

N, M = map(int, input().split())
items = list(map(int, input().split()))

print(solve(N, M, items))
