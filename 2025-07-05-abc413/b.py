def main():
    N = int(input())
    strings = [input().strip() for _ in range(N)]
    
    combinations = set()
    
    for i in range(N):
        for j in range(N):
            if i != j:
                combined = strings[i] + strings[j]
                combinations.add(combined)
    
    print(len(combinations))

if __name__ == "__main__":
    main()