function Student(name, age, number)
{
    this.name = name
    this.age = age
    this.number = number
}
//() => {} 이건 this가 안 됨
Student.prototype.regist = function() {
    alert(this.number+' '+this.name+' 학생 등록 완료')
}

Student.prototype.toString = function() {
    return this.name+' '+this.number+' '+this.age
}

window.onload = () => {     //head 안에 script를 만들었는데 body안에서 쓰고 싶어서@@
    let my_name = document.querySelector('#name')
    let my_age = document.querySelector('#age')
    let my_num = document.querySelector('#num')

    let my_create = document.getElementById('create')
    let my_read = document.getElementById('read')
    let my_update = document.getElementById('update')
    let my_delete = document.getElementById('delete')
    let my_console_log = document.getElementById('console_log') //onclick, document.addEventListner
                                                                //2가지 방식으로 이벤트 추가

    //학생 저장하는 배열 만들기
    let my_students = []

    my_create.onclick = function() {
        for (const iterator of my_students) {   //my_students 배열 길이만큼 반복문 돈다
            if(iterator.number == my_num.value)
            {
                alert('중복 학생 존재')
                return
            }            
        }
        //만약 없다면
        let tempStudent = new Student(my_name.value, my_age.value, my_num.value)
        my_students.push(tempStudent)
        tempStudent.regist() //해당 학생의 정보를 띄움

        //내가 정의한 toString 출력
        console.log(my_students.toString())
        //배열 자체를 출력
        console.log(my_students)
    }

    
    function findStudent()
    {
        //findIndex : 객체형태의 배열에서
        //특정 조건에 맞는 객체가 몇 번에 있는지 찾기
        //ex) my_num에 적힌 값이랑 number 값이 같은 거 찾기

        //indexOf : 숫자나 문자열 형태의 배열에서
        //찾고자 하는 값의 위치(=인덱스) 찾음

        //이 둘의 공통점은 찾고자 하는 값이 없을 때 -1을 반화
        const idx = my_students.findIndex(
            function(item) {
                return item.number == my_num.value
            }
        )
        if(idx != -1)
        {
            alert(`${my_students[idx].number}번 학생은 ${my_students[idx].name}`)
        }
    }

    my_read.onclick = findStudent

    my_update.addEventListener('click', () => {
        const idx = my_students.findIndex (
            function(item) {
                return item.number==my_num.value
            }
        )
        if(idx != -1) {
            my_students[idx].name = my_name.value
            my_students[idx].age = my_age.value
        }
    })

    my_delete.addEventListener('click', function() {
        for(let i =0; i<my_students.length; i++) {   //findIndex, for문 2가지 방법 가능
            if(my_num.value == my_students[i].number)
            {
                my_students.splice(i,1) //i번째 거 1개 제거
                alert('학생 삭제 완료')
                return
            }
        }
        alert('해당 번호의 학생 없음')
    })

    //학생 전체 조회
    let allSelect = function() {
        for (const iterator of my_students) {
            console.log(iterator.toString())            
        }
    }
    my_console_log.addEventListener('click',allSelect)
}