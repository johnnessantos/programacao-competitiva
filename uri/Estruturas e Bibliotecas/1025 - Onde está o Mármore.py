def procura(dados,N, p):
    for i in range(N):
        if dados[i] == p :
            return i+1
        
N = int(input())
Q = int(input())

while N!=0 and Q !=0:
    dados = []*N
    for i in range(N) :
        dados.append(int(input()))
    dados.sort()
    for i in range(Q):
        p =  int(input())
        if (p in dados) :
            print p,'found at',procura(dados,N,p)
        else :
            print p,'not found'
    
    N = int(input())
    Q = int(input())
    dados[:]=[]
