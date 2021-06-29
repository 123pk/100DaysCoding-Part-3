/**
Platform :- Codeforces
Contest :- Kotlin Practise Episode 7 
Approach :- simple constructive expression , if 'n' is odd we have one move with 'a' steps and (n-1)/2 move with (a-b) step
            else if 'n' is even we have (n/2) move with (a-b) steps
*/
fun main(args: Array<String>) {
    val t = Integer.valueOf(readLine())
    for(i in 1..t)
    {
      val (a,b,c)=readLine()!!.split(' ').map(String::toLong)
      var ans:Long = 1 
      if(c%2==ans){
         var d=(c-1)/2
         ans = d*(a-b) +a
      }
      else{
         var d=c/2
         ans= d*(a-b)
      }
      println("$ans")
      
    }
}
