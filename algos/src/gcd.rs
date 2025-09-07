pub fn gcdfinder(a:i64,b:i64) -> (i64,i64,i64) {
    if b == 0 {
        return (a,1,0)
    }
    else {
        let(g,x1,y1) = gcdfinder(b,a%b);
      let  x = y1;
       let  y = x1-(a/b)* y1;
        (g, x, y)
    }
}