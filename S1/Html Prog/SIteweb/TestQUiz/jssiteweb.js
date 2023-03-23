//holds the player score

//const delay = d => new Promise(resolve => setTimeout(() => resolve(1), d));
function Reqsult() {
  var a = true;
  let playerScore = 0;
  if (document.getElementById("q1b").checked === true) {
    playerScore += playerScore + 0.5;
  }
  if (document.getElementById("q1d").checked === true) {
    playerScore += playerScore + 1;
  }

  if (document.getElementById("q2c").checked === true) {
    playerScore += playerScore + 1;
  }

  if (document.getElementById("q3a") === true) {
    playerScore += playerScore + 1;
  }
  if (document.getElementById("q3c") === true) {
    playerScore = playerScore + 2;
  }

  if (
    document.getElementById("q1a").checked === false &&
    document.getElementById("q1b").checked === false &&
    document.getElementById("q1c").checked === false &&
    document.getElementById("q1d").checked == false
  ) {
    document.getElementById("question1").style.color = "red";
    a = false;
    document.getElementById("result").innerHTML =
      "You forgot to answer the question 1";
 
  } else {
    document.getElementById("question1").style.color = "black";
    document.getElementById("result").innerHTML = null;
  }

  if (
    document.getElementById("q2a").checked === false &&
    document.getElementById("q2b").checked === false &&
    document.getElementById("q2c").checked === false
  ) {
    document.getElementById("question2").style.color = "red";
    a = false;
    document.getElementById("result1").innerHTML =
      "You forgot to answer the question 2";
   
  } else {
    document.getElementById("question2").style.color = "black";
    document.getElementById("result1").innerHTML = null;
  }

  if (document.getElementById("wrong").selected === true) {
    a = false;
    document.getElementById("question3").style.color = "red";
    document.getElementById("result2").innerHTML =
      "You forgot to answer the question 3";
  
  } else {
    if (a) {
      document.getElementById("question3").style.color = "black";
      document.getElementById("result2").innerHTML = null;

      if (playerScore === 5) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML =
          "u r the best guy out there";
      }

      if (playerScore === 4) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "u r a very good guy";
      }
      if (playerScore === 3) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "I mean, you're decent";
      }
      if (playerScore === 2) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "I mean, you're decent";
      }
      if (playerScore < 2) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML =
          "yeah even I is sad for u, u r so bad..";
      }
    }
  }
}
//
function show_image(src, width, height, alt) {
  var img = document.createElement("img");
  img.src = src;
  img.width = width;
  img.height = height;
  img.alt = alt;
  // }
  // This next line will just add it to the <body> tag
  document.body.appendChild(img);
}

function myFunction() {
  var x = document.getElementById("myTopnav");
  if (x.className === "w3-top") {
    x.className += "responsive";
  } else {
    x.className = "w3-top";
  }
}

function openNav() {
  document.getElementById("mySidenav").style.width = "150px";
  document.getElementById("main1").style.marginRight = "150px";
  document.getElementById("main2").style.marginRight = "150px";
}

function closeNav() {
  document.getElementById("mySidenav").style.width = "0";
  document.getElementById("main1").style.marginRight = "0";
  document.getElementById("main2").style.marginRight = "0";
}

function OnclickSwitch() {
  if (
    document.getElementById("menuslide1").classList.contains("slide_2") == true
  ) {
    document.getElementById("divswitch").classList.remove("slide_switch");
    document.getElementById("menuslide1").classList.remove("slide_2");
    document.getElementById("menuslide2").classList.remove("slide_2");
    document.getElementById("menuslide3").classList.remove("slide_2");
    document.getElementById("icon").classList.remove("iconclass");
    document.getElementById("icon").classList.add("icon");
  } else {
    document.getElementById("menuslide1").classList.add("slide_2");
    document.getElementById("menuslide2").classList.add("slide_2");
    document.getElementById("menuslide3").classList.add("slide_2");
    document.getElementById("divswitch").classList.add("slide_switch");
    document.getElementById("icon").classList.remove("icon");
    document.getElementById("icon").classList.add("iconclass");
  }
}

function HomeRewrite() {
  document.getElementById("rewrite").innerText = user;
}

/**/
/**
 * Simple and easy to understand cookie API handler
 *
 * author: Kevin F.
 *
 * ----------------------------------------------
 *
 * Functions :
 *  createCookie (name, value, ?days);
 *  getCookies ();
 *  removeCookies (...names);
 *  isCookieDefined (...names);
 *  editCookie (name, new_value);
 */

//-----------------------------------------------
// Constant
//-----------------------------------------------

const DAYS_TO_MS = 864e5;

//-----------------------------------------------
// Primary functions
//-----------------------------------------------

/**
 * Create a new cookie
 * @param {String} name The new cookie's name
 * @param {String|Number} value The new cookie's value
 * @param {Number} [days=1] The numbers of days before expiration (default is 1)
 *
 * @example
 * createCookie("myCookie", 42);
 * createCookie("weekCookie", "nice", 7);
 */
function createCookie(name, value, days = 1) {
  // Get tomorrow's date using Date API
  let exp_date = new Date();
  exp_date.setTime(exp_date.getTime() + days * DAYS_TO_MS);

  // Create cookie
  exp_date = `expires=${exp_date.toUTCString()}`;
  document.cookie = `${name}=${value};${exp_date}`;
}

/**
 * Gets all cookies and return a JSON of them
 * @returns {Object} A JSON containing the cookies in name => value form
 *
 * @example
 * let cookies = getCookies();
 */
function getCookies() {
  // Get raw cookies
  let raw_data = document.cookie;

  // Split all cookies into arrays in the form of
  // [[key1, value1], [key2, value2], ...]
  let all_cookies = raw_data
    .split(";")
    .map((cookie) => cookie.split("="))
    .map((cookie) => [cookie[0].trim(), cookie[1]]);

  // Use Object class function to create JSON from array
  return Object.fromEntries(all_cookies);
}

//-----------------------------------------------
// Derivatives functions
//-----------------------------------------------

/**
 * Remove cookies from the cookie list
 * @param {...String} names The cookies to remove
 *
 * @example
 * removeCookie("cookieToDelete");
 * removeCookie("cookie1", "cookie2", "cookie3");
 */
function removeCookie(...names) {
  // Why would you reinvent the wheel ?
  names.forEach((cookie) => createCookie(cookie, "", -1));
}

/**
 * Check if cookies are defined in the cookie list
 * @param  {...String} names The cookies to check
 * @returns {Boolean} Are the cookies given defined ?
 *
 * @example
 * isCookieDefined("cookieToTest");
 * isCookieDefined("cookie1", "cookie2", "cookie3");
 */
function isCookieDefined(...names) {
  // Get all cookies
  let all_cookies = Object.keys(getCookies());

  // For all cookies given, check if cookie is defined
  for (let i = 0; i < names.length; i++) {
    // Condition for undefined cookie
    if (all_cookies.indexOf(names[i]) === -1) {
      return false;
    }
  }

  // If all cookies are defined
  return true;
}

/**
 * Edit a cookie. Return a boolean telling if the cookie has been edited.
 * @param {String} name The cookie to edit
 * @param {String|Number} new_value The new cookie value
 * @returns {Boolean} Has the cookie been edited ?
 *
 * @example
 * editCookie("oldCookie", "Better value");
 */
function editCookie(name, new_value) {
  // Check if cookie is defined
  if (!isCookieDefined(name)) return false;

  // Edit cookie using the create function
  // Cookie API is working with that method
  createCookie(name, new_value);

  // The cookie has been edited
  return true;
}

//START LUCAS CODE
function CookieSiteLucas() {
  user = prompt("Ur name", "");
  createCookie(CookieName, user, 1);
}

function OnloadCookieFOrm() {
  if (isCookieDefined(CookieName)) {
    window.location.href = "HOMEPAGE.html";
  }
}
function Promptwelcomeback() {
  prompt("Welcome again" + user);
}
