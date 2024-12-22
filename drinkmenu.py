def solve(drink_list, customer_orders):
    customer_pos = {}
    res = []

    for customer in customer_orders:
        if customer not in customer_pos:
            customer_pos[customer] = 0 

        curr_pos = customer_pos[customer]
        res.append(drink_list[curr_pos])
        customer_pos[customer] += 1

    return res


n, m = map(int, input().split())
drink_list = [input().strip() for _ in range(n)]
customer_orders = [input().strip() for _ in range(m)]

print("\n".join(solve(drink_list, customer_orders)))
