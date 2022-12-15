function genlotto(startnum)
{
    let lotto = [startnum]

    for(let i=1; i<6; i++)
    {
        let num = Math.floor(Math.random()*45)+1
        if(lotto.indexOf(num)=-1 || num<startnum) {
            i--
            continue
        }
        lotto[i] = num
    }

    lotto.sort(function(a,b) {return a-b})
    return lotto
}