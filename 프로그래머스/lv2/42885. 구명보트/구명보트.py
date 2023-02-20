def solution(people, limit):
    answer = 0 #모든 사람을 구출하기 위해 필요한 구명보트의 최솟값
    people.sort() #몸무게를 정렬
    front = 0
    back = len(people) - 1
    #이때 front와 back은 people의 인덱스로 쓰일 변수들
    
    while front <= back: #front가 back보다 작거나 같을 때까지 반복
        answer += 1 #보트 개수 추가
        if people[front] + people[back] <= limit: #가장 큰 수와 작은수를 합했을때 lmit보다 작거나 같을때
            front += 1
        back -= 1
            
    return answer