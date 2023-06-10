# 2023 시스템 프로그래밍 명령어 구현

1. Clock() 
- 함수는 C 언어에서 CPU 시간을 측정하기 위해 사용되는 함수. 

코드: 

<img width="501" alt="스크린샷 2023-06-10 오후 10 28 58" src="https://github.com/2020864003/2023syspro/assets/128778304/8f6ef894-3e98-428a-b3e8-b833c9db9b09">

- cpu_time_used 변수는 작업 실행에 소요된 시간을 초 단위로 계산하기 위해 CLOCKS_PER_SEC로 나눈 값. 
- 이 값을 출력하여 작업 실행 시간을 확인. 참고로, clock() 함수는 CPU 시간을 측정하는데 사용되며, 실제 경과 시간을 측정하기 위한 함수는 아님. 
- 실행 환경에 따라 다른 클럭 속도로 동작할 수 있으므로 주의.
- 함수는 <time.h> 헤더 파일에 선언. 
- 프로그램이 실행된 이후로 경과한 CPU 클럭 틱 수를 반환. 
- CPU 클럭 틱은 CPU가 작업을 수행한 시간 단위. 

실행결과 : 

<img width="501" alt="스크린샷 2023-06-10 오후 10 31 30" src="https://github.com/2020864003/2023syspro/assets/128778304/8478211e-51bb-480d-b31c-7096949d4b99">


👇




2. Cat명령어
 - 파일의 내용을 터미널에 출력

실행코드: 

<img width="766" alt="스크린샷 2023-06-10 오후 9 08 21" src="https://github.com/2020864003/2023syspro/assets/128778304/91bccff6-8a3e-4f4f-afbd-a20e8630e308">


- 코드에서는 c언어 실행 시 읽어올 파일의 이름을 입력받음. 
- fopen() 함수를 사용하여 해당 파일을 읽기 모드로 염. 
- 파일 열기에 실패한 경우 에러 메시지를 출력. 
- 출력한 다음, fgets() 함수를 사용하여 파일에서 한 줄씩 읽어오고, 읽어온 내용을 터미널에 출력. 
- fgets() 함수는 파일에서 지정된 크기의 문자열을 읽어옴. 
- 파일 읽기가 끝나면 fclose() 함수를 사용하여 파일을 닫아줌.

실행결과:

<img width="766" alt="스크린샷 2023-06-10 오후 9 12 06" src="https://github.com/2020864003/2023syspro/assets/128778304/bf38018d-fb7b-497e-bfc0-b59a18d1bde6">

- 화면처럼 cat명령어로와 c언어로 만들어 놓은 cat 명령어 둘 다 hello.txt를 열였을 때, 안에 적혀져 있는 내용이 출력.







3. Chmod 명령어
- chmod 명령어는 파일/디렉터리의 접근 권한을 변경하는 명령어
- 파일의 소유자나 시스템 관리자만이 chmod를 사용할 수 있으며, 지정한 파일이나 디렉터리에 대한 파일 소유자, 파일 그룹, 다른 사용자의 접근 권한을 각각 설정
- chmod를 이용한 파일/디렉터리의 권한 변경은 8진수를 이용한 변경법과 기호에 의한 변경법이 있다. 방식은 달라도 결과는 같다.


실행코드: 

<img width="617" alt="스크린샷 2023-06-10 오후 10 23 52" src="https://github.com/2020864003/2023syspro/assets/128778304/9df1f92f-9c2a-4bf3-9896-d820d9e3d4b3">

- 위의 코드에서는 chmod() 함수를 사용하여 hello.txt 파일의 퍼미션을 -rw-r--r-- (644)로 변경. 
- mode_t 타입의 변수인 mode에 변경할 퍼미션 값을 설정하고, chmod() 함수를 호출하여 파일의 퍼미션을 변경.
- 파일의 퍼미션을 변경하는 간단한 예시이며, 퍼미션 값을 직접 설정. 
- 원하는 퍼미션 값을 설정하고 chmod() 함수를 호출하여 파일의 퍼미션을 변경.

실행결과 : 

<img width="617" alt="스크린샷 2023-06-10 오후 10 28 19" src="https://github.com/2020864003/2023syspro/assets/128778304/9dd41fb6-aeb0-412c-9b84-548a0915f014">





4. File Descriptor(fd) 명령어
- 네트워크 소켓과 같은 파일이나 기타 입력/출력 리소스에 액세스하는 데 사용되는 추상표현. 
- 즉, 시스템으로 부터 할당받은 파일이나 소켓을 대표하는 정수. 
- 파일 디스크립터는 음이 아닌 정수(Non-negative Integer)로, 일반적으로 형식 int로 C 프로그래밍 언어로 표현.

실행코드 : 

<img width="766" alt="스크린샷 2023-06-10 오후 9 22 49" src="https://github.com/2020864003/2023syspro/assets/128778304/2f3bf78b-ca2b-4b67-b35d-a5dd5e120b19">

C 언어에서 파일 디스크립터를 다루기 위해 다음과 같은 함수들을 사용:

- open(): 파일을 열고 파일 디스크립터를 반환.
- read(): 파일 디스크립터로부터 데이터를 읽음.
- write(): 파일 디스크립터에 데이터를 씀.
- close(): 파일 디스크립터를 닫음.

실행결과:

<img width="766" alt="스크린샷 2023-06-10 오후 9 26 44" src="https://github.com/2020864003/2023syspro/assets/128778304/fca36a5e-a570-4c08-bfef-1b21dacf5190">








5. system () 
- ls -l명령어 - list의 약자

코드:

<img width="766" alt="스크린샷 2023-06-10 오후 9 43 09" src="https://github.com/2020864003/2023syspro/assets/128778304/bc04b02a-8790-418a-93dd-e6eda386f7c3">

- system("ls -l")을 호출하여 ls -l 명령어를 실행함.
- ls -l은 현재 디렉토리의 파일 목록을 자세히 보여주는 명령어. 
- system() 함수의 반환값은 명령어 실행의 성공 여부를 나타내며, 성공적으로 실행되면 0을 반환함. 명령어 실행이 실패하면 -1을 반환함.
- printf() 함수를 사용하여 명령어 실행에 실패했을 때 오류 메시지를 출력하고, 1을 반환하여 프로그램을 종료. 
- 필요에 따라 system() 함수를 사용한 다른 명령어도 실행.

실행결과 : 

<img width="766" alt="스크린샷 2023-06-10 오후 9 44 28" src="https://github.com/2020864003/2023syspro/assets/128778304/a962bfc1-68ac-4046-a90e-51711f5024bf">







6. mkdir명령어 
- make directory의 약어로서 새로운 디렉토리를 만들때 사용하는 리눅스 명령어.

실행코드:

<img width="766" alt="스크린샷 2023-06-10 오후 9 45 44" src="https://github.com/2020864003/2023syspro/assets/128778304/561b6490-c744-4832-befa-9bbe9ebffed4">

- 0755는 생성된 디렉터리의 퍼미션을 나타내며, 0755는 일반적으로 사용되는 퍼미션으로, 소유자에게 읽기, 쓰기, 실행 권한을 부여하고, 그룹 및 기타 사용자에게 읽기, 실행 권한을 부여합니다. 디렉터리 생성에 실패한 경우 에러 메시지를 출력합니다.

실행결과: 

<img width="766" alt="스크린샷 2023-06-10 오후 9 48 50" src="https://github.com/2020864003/2023syspro/assets/128778304/c873f473-b488-4c09-b7ed-916a679b482a">










7. mv 명령어 
- 파일 또는 디렉터리를 이동하거나 이름을 변경하는 기능을 구현. 
- 이를 위해 <stdio.h> 헤더 파일에 선언되어 있는 rename() 함수를 사용.

실행 코드:

<img width="766" alt="스크린샷 2023-06-10 오후 9 50 10" src="https://github.com/2020864003/2023syspro/assets/128778304/db4a802f-ba99-4ef9-b996-8f13a1f97833">

- 위 코드에서는, 프로그램 실행 시 커맨드 라인 인자로 원본 파일 또는 디렉터리 경로와 대상 경로를 입력. 
- rename() 함수를 사용하여 원본 경로의 파일 또는 디렉터리를 대상 경로로 이동하거나 이름을 변경. 
- 이동 또는 이름 변경에 실패한 경우 에러 메시지를 출력.

실행결과: 

<img width="766" alt="스크린샷 2023-06-10 오후 9 57 14" src="https://github.com/2020864003/2023syspro/assets/128778304/b2efff89-4a4f-42a2-abec-e943f3f0f3f4">









8. pwd 명령어
- pwd 명령어는 현재 작업 중인 디렉터리의 절대 경로를 출력. 아래는 현재 작업 중인 디렉터리를 확인.

<img width="487" alt="스크린샷 2023-06-10 오후 9 59 59" src="https://github.com/2020864003/2023syspro/assets/128778304/8ab57110-b9e8-4e62-8315-0d7083d1c49d">

- 어떤 디렉터리 위치에서도 cd 명령어를 실행하면, $HOME 디렉터리로 이동. 
- cd -를 입력하면 바로 이전의 작업 디렉터리로 이동.

실행코드: 

<img width="487" alt="스크린샷 2023-06-10 오후 10 00 29" src="https://github.com/2020864003/2023syspro/assets/128778304/f2390013-35ec-425b-a285-9528e50e62e0">

-위의 예제에서는 getcwd() 함수를 사용하여 현재 작업 중인 디렉터리 경로를 path 배열에 저장. 
- 경로의 최대 길이는 MAX_PATH로 정의. 
- getcwd() 함수가 실패한 경우 perror() 함수를 사용하여 에러 메시지를 출력. 성공한 경우 path 배열에 저장된 경로를 출력.

실행결과 : 

<img width="487" alt="스크린샷 2023-06-10 오후 10 00 55" src="https://github.com/2020864003/2023syspro/assets/128778304/71475317-da48-4d35-8d81-9c73ef371aa6">









9. rm 명령어
- rm 명령어와 유사한 동작을 하는 프로그램을 만들기 위해서는 파일을 삭제하는 기능을 구현.

실행코드:

<img width="487" alt="스크린샷 2023-06-10 오후 10 08 49" src="https://github.com/2020864003/2023syspro/assets/128778304/2ee52556-061f-424b-b769-0ced75bc05f8">

- 위의 예제에서는 코드 실행 시, 삭제할 파일들의 경로를 입력. 
- remove() 함수를 사용하여 각 파일을 순차적으로 삭제. 
- 파일 삭제에 성공하면 메시지를 출력하고, 실패한 경우 에러 메시지를 출력.



실행결과 : 

<img width="487" alt="스크린샷 2023-06-10 오후 10 09 40" src="https://github.com/2020864003/2023syspro/assets/128778304/de4ea706-2318-49d5-b058-317c70f077bf">










10. read 명령어 
- read() 함수는 파일 디스크립터로부터 데이터를 읽는 데 사용.

실행코드 : 

<img width="487" alt="스크린샷 2023-06-10 오후 10 14 26" src="https://github.com/2020864003/2023syspro/assets/128778304/d1fa7aaa-1790-4f78-a570-ee9a5a9c9e65">

- 위의 코드에서 hello.txt 파일을 열고, read() 함수를 사용하여 파일에서 데이터를 읽음. 
- 읽은 데이터는 buffer에 저장되며, bytesRead 변수에는 실제로 읽은 바이트 수가 저장. 
- 그런 다음, fwrite() 함수를 사용하여 읽은 데이터를 표준 출력에 출력.

- 주의할 점은 read() 함수는 파일 디스크립터에서 읽은 바이트 수를 반환하며, 실제로 읽은 바이트 수가 요청한 바이트 수와 다를 수 있음. 
- 따라서 반환된 바이트 수를 확인하여 필요한 처리를 수행. 또한, 파일을 읽은 후에는 반드시 파일을 닫아야 함. (close() 함수 사용).


- 위의 코드에서 파일을 열기 위해 open() 함수를 사용하였으며, 파일 디스크립터는 int 자료형으로 반환. 
- open() 함수는 <fcntl.h> 헤더 파일에 선언. 
- O_RDONLY은 파일을 읽기 전용으로 열기 위한 플래그. 
- 마지막으로, 오류 처리를 위해 perror() 함수를 사용하여 오류 메시지를 출력하고 프로그램을 종료.

실행결과: 

<img width="487" alt="스크린샷 2023-06-10 오후 10 14 56" src="https://github.com/2020864003/2023syspro/assets/128778304/b13404d7-cd64-4f0b-a84e-46080c1984b4">
