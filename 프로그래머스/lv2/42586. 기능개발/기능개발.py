def solution(progresses, speeds):

    answer = []
    time = 0
    count = 0
    
    while len(progresses)> 0:
        if (progresses[0] + time*speeds[0]) >= 100: #각 기능 별 진행정도 + 시간*각 기능 별 속도가 100 이상이라면
            progresses.pop(0) #첫번째 꺼내기(pop에서 꺼낸 원소는 progresses에서 제거됨)
            speeds.pop(0) #첫번째 꺼내기(pop에서 꺼낸 원소는 speeds에서 제거됨)
            count += 1 #카운트
            
        else: #각 기능 별 진행정도 + 시간*각 기능 별 속도가 100 이하라면
            if count > 0: #count가 0 초과라면
                answer.append(count) #answer에 count 추가
                count = 0 #예시 1번의 경우 7일째에 완료되는 기능은 2개이기 때문에 count 초기화
            time += 1 #if조건에 맞게 하기 위해 루프가 총 7번 돌고 time이 7되면 첫 번째 if 조건문 실행
    answer.append(count)
    return answer