mod binarysearch;
mod gcd;
fn main() {
    let arr = vec![-5,-4,0,1,2];
    let x = 2;

    match binarysearch::binarysearch(&arr, x) {
        Some(idx) => println!("Element found at index {}", idx),
        None => println!("Element not found"),
    }
    let (g, x, y) = gcd::gcdfinder(30, 20);
    println!("gcd = {}, x = {}, y = {}", g, x, y);
}