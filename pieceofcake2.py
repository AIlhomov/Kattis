
def calculate_largest_piece_volume(n, h, v):

    T = 4  

    area1 = h * v
    area2 = h * (n - v)
    area3 = (n - h) * v
    area4 = (n - h) * (n - v)
    max_area = max(area1, area2, area3, area4)
    
    return max_area * T

def main():
    n, h, v = map(int, input().split())
    print(calculate_largest_piece_volume(n, h, v))

if __name__ == "__main__":
    main()