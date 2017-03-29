type imType;
type fromType;
external imperialMetric: float => imType = "imperial-metric" [@@bs.module];
external from :
  [
    | `inch
    | `foot
    | `mm
    | `cm
    | `m
    | `km
    | `sqrt_m
    | `sqrt_cm
    | `sqrt_mm
    | `sqrt_km
    | `sqrt_inch
    | `sqrt_foot
  ]
  [@bs.string] => fromType =  "" [@@bs.send.pipe : imType];

external _to :
  [
    | `inch
    | `foot
    | `mm
    | `cm
    | `m
    | `km
    | `sqrt_m
    | `sqrt_cm
    | `sqrt_mm
    | `sqrt_km
    | `sqrt_inch
    | `sqrt_foot
  ]
  [@bs.string] => float = "to" [@@bs.send.pipe : fromType];

let result = imperialMetric 1. |> from `km |> _to `inch;

Js.log result;
