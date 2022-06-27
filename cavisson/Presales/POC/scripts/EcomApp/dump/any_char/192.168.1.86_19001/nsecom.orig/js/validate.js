function validateQuantity() {
	value = document.frmMain2.quantity.value;
	value = value.replace(/^\\s+/g, '').replace(/\\s+$/g, '');
	if (value == '') {
		alert('Please enter quantity.');
		document.frmMain2.quantity.focus();
		return false;
	}
	var pattern = /[^0-9]/;
	if (value.match(pattern)) {
		alert('Please enter only numeric value.');
		document.frmMain2.quantity.focus();
		return false;
	}
	// return true;
	document.frmMain2.action = "/nsecom/AddToBagServlet";
	document.frmMain2.submit();
}

function submitFrom(Action) {
	if (Action == 'Continue Checkout') {
		// document.frmMain2.action = "../../nsecomWebProject/ShippingServlet";
		document.frmMain2.action = "/nsecom/jsp/ShippingPage.jsp";
	} else {
		document.frmMain2.action = "/nsecom/CancelServlet";
	}
	document.frmMain2.submit();
}

function validateShippingDetails() {

	if (document.frmMain2.name.value == '') {
		alert('Enter name');
		document.frmMain2.name.focus();
		return;
	}

	if (document.frmMain2.address.value == '') {
		alert('Enter Address');
		document.frmMain2.address.focus();
		return;
	}

	if (document.frmMain2.city.value == '') {
		alert('Enter City');
		document.frmMain2.city.focus();
		return;
	}

	if (document.frmMain2.PostalCode.value == '') {
		alert('Enter Postal Code.');
		document.frmMain2.PostalCode.focus();
		return;
	}

	document.frmMain2.action = "/nsecom/CheckOutServlet";
	document.frmMain2.submit();
}

function validateKeyword() {
	if (document.frmMain.keyword.value == '') {
		alert('Search keyword is not passed in the search request');
		document.frmMain.keyword.focus();
		return false;
	}

	if (document.frmMain.keyword.value.length > 64) {
		alert("Invalid search keyword. Keyword cannot be more than 64 characters");
		document.frmMain.keyword.focus();
		return false;
	}

	document.frmMain.action = "/nsecom/SearchProductServlet";	
	document.frmMain.submit();

}
