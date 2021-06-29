/**
Platform :- Codeforces 
Contest :- Kotlin Heros Episode 7 
Approach :- If difference between two consecutive element is even then we can always find such value
*/
fun main(args: Array<String>) {
    val t = Integer.valueOf(readLine())
    for(i in 1..t)
    { 
      
      val n=readLine()!!.toInt()
      
      var A = readLine()!!.split(" ").map { it.toLong() }
      var f:Int=0
      var j:Int=1
      while(j<n){
         if((A[j]-A[j-1])%2==0L){
            f=1
            break
         }
         j++
      }
      
      if(f==1)println("YES")
      else println("NO")
      
    }
}
