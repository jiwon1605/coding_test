def solution(answers):
    answer = []
    p1 = [1,2,3,4,5]
    p2 = [2,1,2,3,2,4,2,5]
    p3 = [3,3,1,1,2,2,4,4,5,5]
    
    cnt_p1 = 0
    cnt_p2 = 0
    cnt_p3 = 0

            
    for i in range(len(answers)):
        if p1[i%5] == answers[i]:
            cnt_p1 += 1
        if p2[i%8] == answers[i]:
            cnt_p2 += 1
        if p3[i%10] == answers[i]:
            cnt_p3 += 1
        else:
            i += 1
            
    M = max(cnt_p1, cnt_p2, cnt_p3)
    
    if M == cnt_p1:
        answer.append(1)
    if M == cnt_p2:
        answer.append(2)
    if M == cnt_p3:
        answer.append(3)
    
        
    return answer