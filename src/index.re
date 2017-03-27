type imType = Js.t {
  . from: (string => imType) [@bs.meth],
  _to: (string => int) [@bs.meth]
};
external imperialMetric: int => imType = "imperial-metric" [@@bs.module];

Js.log (((imperialMetric(1))##from("inch"))##_to("cm"));
