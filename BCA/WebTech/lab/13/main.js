var retval = true;

function validate() {
    retval = false;
    if (isEmpty("name"))
        report("name", "Name");
    if (isEmpty("enum"))
        report("enum", "Enrollment Number");
    if (isEmpty("course"))
        report("course", "Course");
    if (isEmpty("moa"))
        report("moa", "Month of Admission");
    if (isEmpty("dob"))
        report("dob", "Date of birth");
    if (!(document.getElementsByName("gender")[0].checked 
        ^ document.getElementsByName("gender")[1].checked))
        report("radio", "Gender");
    return retval;
}

function report(id, type) {
    alert(type + " is required.");
    element(id).focus();
    retval = false;
}

function isEmpty(id) {
    return !element(id).value;
}

function element(id) {
    return document.getElementById(id);
}