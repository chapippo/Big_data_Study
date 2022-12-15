function genLotto()
{
    let lotto = []  //비어있는 배열

    //난수생성코드
    for(let i=0 ; i<6; i++)
    {
        let num = Math.floor(Math.random()*45)+1

        let isDuplicate = false //중복되는지 안되는지 확인 위해 변수 선언
        for(let j=0; j<i; j++)  //값을 하나도 안 넣었으면 j=0에 i=0이라 ck ㄴㄴ, 
                                //하나 들어가면 0번째부터 ck
        {
            if(num==lotto[j]){
                isDuplicate = true  //중복된게 있으면 true로 두고 break
                i--
                break
            }
        }
        if(isDuplicate==false)
            lotto.push(num)     //중복되지 않는 숫자 7개가 들어감 //위에서 중복 안되면 
                                //isDuplicate=false 이므로 값을 push
    }

    //정렬코드(버블정렬)
    for(let i=0; i<lotto.length; i++)
    {
        for(let j=0; j<lotto.length-1-i; j++) //j번째랑 j+1번째를 비교해야 됨-> length-1을 한 이유
        {                                   //7이라면 8은 없으므로 비교를 할 수 없으므로
                                                //-i -> 앞에 비교 끝난거 넘어가기 위해
            if(lotto[j]>lotto[j+1]) //j번째가 j+1번째보다 크면 값을 서로 바꿈
            {
                let temp = lotto[j]
                lotto[j] = lotto[j+1]
                lotto[j+1] = temp
            }
        }
    }
    return lotto    //배열을 리턴       
}