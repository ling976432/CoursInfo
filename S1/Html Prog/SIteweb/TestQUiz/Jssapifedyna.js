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
  if (isCookieDefined("CookieName")) {
    window.location.href = "https://lucas-bondon-etu.pedaweb.univ-amu.fr/extranet/HOMEPAGE.html";
    let user = getCookies("CookieName");
  } else {
    let user = prompt("Ur name", "");
    createCookie("CookieName", user, 365);
  }
}
function HelloAgain() {
  prompt("Welcome " + user);
}
