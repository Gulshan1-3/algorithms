pub fn binarysearch(arr:&[i32],x:i32) -> Option<usize> {
    let mut low = 0;
    let mut high = arr.len().wrapping_sub(1);
    while low<=high  {
    let mid = low + (high - low) / 2;
    if arr[mid]==x {
        return Some(mid);
    }

    else if arr[mid]<x {
        low = mid + 1;
    }
    else {
      
        high = mid - 1 ;
    }
    }
    None
}


