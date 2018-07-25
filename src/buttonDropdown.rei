let make:
  (~isOpen: bool=?, ~toggle: ReactEventRe.Mouse.t => unit=?, 'a) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );