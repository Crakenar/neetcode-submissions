class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if (s.length != t.length) {return false};
        const mapS = new Map();
        const mapT = new Map();
        for (let i = 0; i < s.length; i++) {
            const p = mapS.get(s[i]);
            if  (p == undefined) {
                mapS.set(s[i], 1)
            } else {
                mapS.set(s[i], p + 1)
            }

            const y = mapT.get(t[i]);
            if  (y == undefined) {
                mapT.set(t[i], 1)
            } else {
                mapT.set(t[i], y + 1)
            }
        }
  
        const iteratorS = mapS[Symbol.iterator]();

        let result = true;
        for (const [keyS, valueS] of iteratorS) {
            const valueFromT = mapT.get(keyS)
            if  (valueFromT != valueS) {
                result = false
                break;
            }
        }
        return result;
    }
}
