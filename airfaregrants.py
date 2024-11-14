def calculate_net_cost(prices):
    min_price = min(prices)
    max_price = max(prices)
    
    r = min(max_price // 2, min_price)
        
    return min_price - r

n = int(input())
l = []
for i in range(n):
    l.append(int(input()))

print(calculate_net_cost(l))
