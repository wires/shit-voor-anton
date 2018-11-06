const R = require('ramda')

const {splitWhen,equals,isEmpty,append,tail} = require('ramda')

const g = splitWhen(equals(0))

const f = x => {
    let [c,r1] = g(x)
    let [d,r2] = g(tail(r1))
    return [[c,d], tail(r2)]
}

const h_ = (acc, x) => {
    let [cd, tl] = f(x)
    let ns = append(cd, acc)
    return isEmpty(tl) ? ns : h_(ns, tl)
}

const decodeNumberlist = x => R.map(([pre,post]) => ({pre,post}), h_([], x))


const hack = (x) => console.log(JSON.stringify(x))


module.exports = {f,g,h_,decodeNumberlist, hack}
