'use strict';

function isJson(jsonString) {
  try {
    const jsonObject = JSON.parse(jsonString);

    if (typeof jsonObject === 'object' && jsonObject !== null) {
      return true;
    }
  } catch (_) {}

  return false;
}

module.exports = isJson;
