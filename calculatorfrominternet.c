#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
void   itoa   (   unsigned   long   val,   char   *buf,   unsigned   radix   )   
{   
    char   *p;                                 /*   pointer   to   traverse   string   */   
    char   *firstdig;                   /*   pointer   to   first   digit   */   
    char   temp;                             /*   temp   char   */   
    unsigned   digval;                 /*   value   of   digit   */   

    p   =   buf;   
    firstdig   =   p;                       /*   save   pointer   to   first   digit   */   

    do  
    {   
        digval   =   (unsigned)   (val   %   radix);   
        val   /=   radix;               /*   get   next   digit   */   

        /*   convert   to   ascii   and   store   */   
        if   (digval   >   9)   
        *p++   =   (char   )   (digval   -   10   +   'a ');     /*   a   letter   */   
        else   
        *p++   =   (char   )   (digval   +   '0 ');               /*   a   digit   */   
    }   while   (val   >   0);   

    /*   We   now   have   the   digit   of   the   number   in   the   buffer,   but   in   reverse   
    *                         order.     Thus   we   reverse   them   now.   */   

    *p--   =   '\0 ';                         /*   terminate   string;   p   points   to   last   digit   */   

    do
    {   
        temp   =   *p;   
        *p   =   *firstdig;   
        *firstdig   =   temp;       /*   swap   *p   and   *firstdig   */   
        --p;   
        ++firstdig;                   /*   advance   to   next   two   digits   */   
    }   
    while   (firstdig   <   p);   /*   repeat   until   halfway   */   
}
int deal(int op1,int op2,char op) //运算 
{ 
    switch(op) 
    { 
    case '+': op1 += op2; break; 
    case '-': op1 -= op2; break; 
    case '*': op1 *= op2; break; 
    case '/': op1 /= op2; break; 
    case '^': 
              { 
                  int temp = op2; 
                  for(int i = 1; i < op2 - 1; i++) 
                      op1 *= temp; 
                  break; 
              } 
    } 
    return op1; 
} 
char *replace(char *source, char *sub, char *rep) //字符串替换 
{ 
    char *result; 
    char *pc1, *pc2, *pc3; 
    int isource, isub, irep; 
    isub = strlen(sub); 
    irep = strlen(rep); 
    isource = strlen(source); 
    if(NULL == *sub) 
        return strdup(source); 
    result = (char *)malloc(( (irep > isub) ? (float)strlen(source) / isub* irep+ 1:isource ) * sizeof(char)); 
    pc1 = result; 
    while(*source != NULL) 
    { 
        pc2 = source; 
        pc3 = sub; 
        while(*pc2 == *pc3 && *pc3 != NULL && *pc2 != NULL) 
            pc2++, pc3++; 
        if(NULL == *pc3) 
        { 
            pc3 = rep; 

            while(*pc3 != NULL) 
                *pc1++ = *pc3++; 
            pc2--; 
            source = pc2; 
        } 
        else 
            *pc1++ = *source; 
        source++; 
    } 
    *pc1 = NULL; 
    return result; 
} 

int main() 
{ 
    char s[1000],op1[100],op2[100],*p,*temp,*back; 
    scanf("%s",&s); 
    temp = s; 
    back = s; 
    int pos = -1; 
    int fin,oper1,oper2,tmp, size; 
    char op; 
    while(1) 
    { 
        size = (int)strlen(temp); 
        for(int i = 0; i < size; i++,temp++) 
        { 
            if( *temp == '(') 
            { 
                p = (temp + 1); 
                pos =(i + 1); //找出最后一个(的位置 
            } 
        } 
        int k = 0; 
        if(pos != -1) 
        { 
            temp = back; 
            tmp = pos; 
            while(*p != ')') 
            { 
                p++; 
                tmp++; 
                if( *p == '*' || *p == '/') 
                { 
                    tmp--; 
                    for(;(temp[tmp] >= '0' && temp[tmp] <= '9') || temp[tmp] == '.';) 
                    { 
                        tmp--; 
                        break; 
                    } 
                } 
                else 
                    continue; 
            } 
            if(tmp != pos && *p != ')') 
            { 
                pos = ++tmp; 
            } 
            int start = pos; 
            while( temp[pos] >= '0' && temp[pos] <= '9') 
            { 
                op1[k] = temp[pos]; 
                pos++; 
                k++; 
            } 
            op1[k] = '\0'; 
            while((temp[pos] >= '0' && temp[pos] <= '9') || temp[pos] == '.') 
                pos++; 
            op = temp[pos]; 
            oper1 = atoi(op1); 
            pos++; 
            k = 0; 
            while( temp[pos] >= '0' && temp[pos] <= '9') 
            { 
                op2[k] = temp[pos]; 
                pos++; 
                k++; 
            } 
            op2[k] = '\0'; 
            while((temp[pos] >= '0' && temp[pos] <= '9') || temp[pos] == '.') 
                pos++; 
            oper2 = atoi(op2); 
            int end; 
            if( temp[pos] != ')') 
                end = --pos; 
            else 
            { 
                if(temp[start-1] == '(') 
                { 
                    end = pos; 
                    start--; 
                } 
            } 
            char rep[100]; 
            k = 0; 
            for(; start <= end; start++,k++) 
            { 
                rep[k] = temp[start]; 
            } 
            rep[k] = '\0'; 
            fin = deal(oper1,oper2,op); 
            char final[100]; 
            itoa(fin,final,10); 
            temp = replace(temp,rep,final); 
            back = temp; 
            pos = -1; 
            p = temp; 
            k = 0; 
            *rep = NULL; 
            *final = NULL; 
            printf("%s\n",replace(temp,rep,final)); 
        } 
        else 
        { 
            temp = back; 
            p = temp; 
            tmp = pos; 
            while(*p != '\0') 
            { 
                p++; 
                tmp++; 
                if( *p == '*' || *p == '/') 
                { 
                    tmp--; 
                    for(;(temp[tmp] >= '0' && temp[tmp] <= '9') || temp[tmp] == '.';) 
                    { 
                        tmp--; 
                        break; 
                    } 
                } 
                else 
                    continue; 
                break; 
            } 
            if(tmp != pos && tmp != (int)strlen(temp)-1) 
            { 
                pos = ++tmp; 
            } 
            else 
                pos = 0; 
            int start = pos; 
            while( temp[pos] >= '0' && temp[pos] <= '9') 
            { 
                op1[k] = temp[pos]; 
                pos++; 
                k++; 
            } 
            while((temp[pos] >= '0' && temp[pos] <= '9') || temp[pos] == '.') 
                pos++; 
            op1[k] = '\0'; 
            op = temp[pos]; 
            oper1 = atoi(op1); 
            pos++; 
            k = 0; 
            while( temp[pos] >= '0' && temp[pos] <= '9') 
            { 
                op2[k] = temp[pos]; 
                pos++; 
                k++; 
            } 
            op2[k] = '\0'; 
            while((temp[pos] >= '0' && temp[pos] <= '9') || temp[pos] == '.') 
            { 
                pos++; 
                if(pos >= (int)strlen(temp)) 
                    break; 
            } 
            oper2 = atoi(op2); 
            int end = --pos; 
            char rep[100] = {'\0'}; 
            k = 0; 
            for(; start <= end; start++) 
            { 
                rep[k] = temp[start]; 
                k++; 
            } 
            fin = deal(oper1,oper2,op); 
            char final[100]; 
            itoa(fin,final,10); 
            temp = replace(temp,rep,final); 
            back = temp; 
            for(k = 0; k < (int)strlen(temp); k++) 
            { 
                if(temp[k] < '0' || temp[k] > '9' && temp[k] != '.') 
                    break; 
            } 
            if(k == (int)strlen(temp)) 
                break; 
            pos = -1; 
            p = temp; 
            k = 0; 
            printf("%s\n", temp); 
        } 
    } 
    printf("%d\n",fin); 
    return 0; 
}
