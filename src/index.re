external imperialMetric: int => 'a = "imperial-metric" [@@bs.module];

type option =
  | Unit string;

let inch = Unit "inch";
let cm = Unit "cm";
let unit = fun (Unit u) => u;

let result = ((imperialMetric 1)##from (unit inch))##_to (unit cm);
Js.log result;
