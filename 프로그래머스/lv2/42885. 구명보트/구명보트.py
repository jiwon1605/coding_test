def solution(people, limit):
    answer = 0
    people.sort()
    front = 0
    back = len(people) - 1
    
    while front < back:
        if people[front] + people[back] <= limit:
            front += 1
            answer += 1
        back -= 1
            
    return len(people)-answer