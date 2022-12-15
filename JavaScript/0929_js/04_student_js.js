// window.onload
document.addEventListener('DOMContentLoaded',
(
    function() {
        //모든 코드를 한 번에 변경하는 기능
        //ctrl + f2

        // const name = $('#name')
        const name = document.getElementById('name')
        // const gender = $('#gender')
        const gender = document.getElementById('gender')
        // const beonho = $('#beonho')
        const beonho = document.getElementById('beonho')


        // const print = $('#print')
        const print = document.getElementById('print')
        // const reset = $('#reset')
        const reset = document.getElementById('reset')
        // const printOrderby = $('#printOrderBy')
        const printOrderby = document.getElementById('printOrderBy')
        // const information = $('#information')
        const information = document.getElementById('information')


        function resetInfo() {
            //information 안에 있는 걸 다 날리는 것
            // information.html('')

            information.innerHTML = ''
        }


        //reset.on : jQ
        reset.addEventListener('click', function() {
            resetInfo()
            students = []   //student.js에 있는 배열
        })

        print.addEventListener('click', function() {
            //val = value = input 태그의 value
            const student = new Student(name.value, gender.value, Number(beonho.value))


            // let newStudentInfo = $('<h1></h1>')
            let newStudentInfo = document.createElement('h1')
            // newStudentInfo.text(student.toString())
            newStudentInfo.textContent = student.toString()


            if(student.gender=='남')
            {
                newStudentInfo.style.backgroundColor = 'skyblue'
                newStudentInfo.style.color = 'blue'
                // .css('background-color','skyblue')
                // .css('color','blue')
            }

            else
            {
                newStudentInfo.style.backgroundColor = 'black'
                newStudentInfo.style.color = 'pink'
                // .css('background-color','black')
                // .css('color','pink')
            }

            // information.append(newStudentInfo)
            information.appendChild(newStudentInfo)
        })



        printOrderby.addEventListener('click', function(){

            //중복체크 로직을 적기
            const idx = students.findIndex( //students 배열 안에서 idx를 찾을거야
                function(item) {    //students 안에 있는 하나하나 = item(다르게 적어도 됨)
                    return item.beonho === Number(beonho.value)
                }
            )

            if(idx != -1)   //이미 해당 번호가 있는 경우
            {
                alert('중복!')
                return
            }

            resetInfo() //화면 리셋
            //새로운 값 추가
            students.push(new Student(name.value, gender.value, Number(beonho.value)))
                                        //val : jq 언어



            //정렬(객체 정렬할 때도 sort를 씀)
            students.sort(function(a,b) {
                return a.beonho - b.beonho
            })
            


            //정렬된 것을 print
            for(let i = 0; i<students.length; i++)
            {
                // let newStudentInfo = $('<h1></h1>')
                let newStudentInfo = document.createElement('h1')
                // newStudentInfo.text(students[i].toString())
                newStudentInfo.textContent = students[i].toString()
                if (students[i].gender == '남') {
                    newStudentInfo.style.backgroundColor = 'skyblue'
                    newStudentInfo.style.color = 'blue'
                    // .css('background-color', 'skyblue')
                    // .css('color', 'blue')
                }
                else {
                    newStudentInfo.style.backgroundColor = 'black'
                    newStudentInfo.style.color = 'pink'
                    // .css('background-color', 'black')
                    // .css('color', 'pink')
                }
                // information.append(newStudentInfo)
                information.appendChild(newStudentInfo)
            }
        })
    }
)
)