function reve(){
    var str = document.getElementById("input").value;
    var a = new Array;
    a = str.split(' ');
    var start = 0;
    var temp;
        end = a.length - 1;
        while (start != end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
        document.getElementById("output").value = a.join(' ');
}