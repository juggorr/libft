# libft
42 cursus 1st assignment

### ft_memset
char: -128 ~ 127  
u_char: 0 ~ 255  
1bit는 0, 1 한칸을 의미  
1byte는 bit가 대여르처럼 8개 붙어있음  

void\*	memset(void\* b, int c, size_t len);  
**The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.**  
int를 unsigned char로 convert해야함  
그냥 내장 형변환 사용하면 될듯함  
`b[idx] = (unsigned char) c` => incomplete type 'void' is not assignable  
할당하기 전에 타입을 지정해주고 할당받아야한다.  
`b + idx = &cha` 보이드 포인터에 + 1 을 한 주소에 값을 할당하는 일이 불가능  
보이드 포인터의 경우 값을 크기를 알 수 없기 때문에 포인터 형변환을 통해 값을 지정해 주어야 한다.  
`*((char *)b + idx) = cha;`  요놈은 정상적으로 할당가능  
`(char *)b + idx = &cha;`    요놈은 할당불가능 에러발생 

### ft_memcpy, ft_memmove
##### memory overlap

#### ft_memchr

https://rcode.tistory.com/14 char과 unsigned char을 구분해야 하는 이유




## WIP
- memmove
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup
