class Solution {
    /**
     * @param {number[]} matchsticks
     * @return {boolean}
     */
    makesquare(matchsticks) {
        let sum = matchsticks.reduce((a, b) => a + b, 0);
        if (sum % 4 !== 0) return false;

        const target = sum / 4;

        // Sort descending for pruning
        matchsticks.sort((a, b) => b - a);

        const sides = [0, 0, 0, 0];

        function dfs(index) {
            if (index === matchsticks.length) {
                return sides[0] === target &&
                       sides[1] === target &&
                       sides[2] === target &&
                       sides[3] === target;
            }

            const stick = matchsticks[index];

            for (let i = 0; i < 4; i++) {
                if (sides[i] + stick > target) continue;

                sides[i] += stick;

                if (dfs(index + 1)) return true;

                sides[i] -= stick;
            }

            return false;
        }

        return dfs(0);
    }
}