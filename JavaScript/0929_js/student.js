//클래스선언
class Student {
    constructor(name,gender,beonho)
    {
        this.name=name
        this.gender=gender
        this.beonho=beonho
    }
    // toString() {        
    //         return `${this.name} 학생은 ${this.gender}학생이며, ${this.beonho}번이다.` 
    // }
    //이렇게도 가능, 다만 메모리 낭비
}
                //toString이라는 함수 정의
Student.prototype.toString = function() {
    return `${this.name} 학생은 ${this.gender}학생이며, ${this.beonho}번이다.` 
}

//배열선언
let students = []