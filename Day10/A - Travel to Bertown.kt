/**
Platform :- Codeforces
Contest :- Kotlin Heros :- Episode 7
Hint :- find the biggest value [ if ( s[i]<= 'b' ) where s[i] is the start time for every friend and 'b' is time at which she arrives in Bertown ],
         of (e[i]-'b'] where e[i] is end time
*/

fun main(args: Array<String>) {
    val t = Integer.valueOf(readLine())
    for(i in 1..t)
    { 
      
      val (n,b)=readLine()!!.split(' ').map(String::toLong)
      var ans:Long=0
      for(j in 1..n){
         val(c,d)=readLine()!!.split(' ').map(String::toLong)
         if(c<=b){
           var temp=(d-b)+1;
           if(ans<temp){
              ans=temp
           }
         }
      }
      
      println(ans)
      
    }
}
