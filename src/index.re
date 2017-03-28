type imType = Js.t {
  . from: (string => imType) [@bs.meth],
  _to: (string => int) [@bs.meth]
};

external imperialMetric: int => imType = "imperial-metric" [@@bs.module];

type option =
  | Unit string;

let inch = Unit "inch";
let cm = Unit "cm";

let getUnit = fun (Unit u) => u;

Js.log (((imperialMetric(1))##from(getUnit inch))##_to(getUnit cm));
