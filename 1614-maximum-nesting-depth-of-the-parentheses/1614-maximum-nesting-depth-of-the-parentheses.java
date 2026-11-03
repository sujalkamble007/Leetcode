class Solution {

//     "(  1   +   (   2   *   3   )   +   (   (   8   )   /   4   )   )   +   1"
//                                                                             |

//     "(  )   (   (   )   )   (   (  (   )    (   )   )   )"
//                                                         |

// count = 0
// result = 1 -> 2 -> 3

// result = Math.max(count , result);

// open bracket ++
// close bracket --
// if count become zero then store into result

    public int maxDepth(String s) {
        int count = 0;
        int result = 0;
        for(char c : s.toCharArray()){
            if(c == '('){
                count++;
                result = Math.max(result , count);
            }else if(c == ')'){
                count--;
            }else continue;
            
        }
        return result;
    }
}