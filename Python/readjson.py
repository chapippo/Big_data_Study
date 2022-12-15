import json

import pymysql

# with 키워드 : 파일 읽어들이고 자동으로 close 해줌
# 별도로 f.close() 안 해도 됨
with open('data2.json', encoding='utf-8')as f:
    json_object = json.load(f) #json 파일 읽어옴
                               #json_object에 내용 저장
print(json_object)

conn = pymysql.connect(host='localhost',
                           user='root',
                           password='1234',
                           db='myprojectdb',
                           charset='utf8')

sql = 'insert into book values(%d, "%s", %d)'
json_arr = json_object['data']  # json_object의 속성이 'data'인 것만 긁어옴(currentCount나 등등은 안 긁어옴)
cur = conn.cursor()
for item in json_arr:
    cur.execute(sql % ( ((int)(item['연번']))+3000,item['서명'],(int)(item['가격']) ))
                                # json 같은 경우에는 'data', '연번', '서명', '가격' 같이 속성명을 직접 적음
conn.commit()
conn.close()