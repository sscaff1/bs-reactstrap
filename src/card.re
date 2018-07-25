type tag;
type cssModule;
type innerRef;

[@bs.module "reactstrap"] external mainView : ReasonReact.reactClass = "Card";

type block;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  inverse: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  block,
  [@bs.optional]
  body: bool,
  [@bs.optional]
  outline: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~tag=?,
      ~inverse=?,
      ~color=?,
      ~block=?,
      ~body=?,
      ~outline=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=mainView,
    ~props=
      props(
        ~tag?,
        ~inverse?,
        ~color?,
        ~block?,
        ~body?,
        ~outline?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );

module Body = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardBody";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    className: string,
    [@bs.optional]
    cssModule,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Column = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardColumns";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    className: string,
    [@bs.optional]
    cssModule,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Deck = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardDeck";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Footer = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardFooter";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Group = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardGroup";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Header = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardHeader";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Img = {
  [@bs.module "reactstrap"] external view : ReasonReact.reactClass = "CardImg";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    top: bool,
    [@bs.optional]
    bottom: bool,
    [@bs.optional]
    className: string,
    [@bs.optional]
    cssModule,
  };
  let make = (~tag=?, ~top=?, ~bottom=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~top?, ~bottom?, ~className?, ~cssModule?, ()),
      children,
    );
};

module ImgOverlay = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardImgOverlay";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Link = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardLink";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
    [@bs.optional]
    innerRef,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Subtitle = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardSubtitle";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Text = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardText";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};

module Title = {
  [@bs.module "reactstrap"]
  external view : ReasonReact.reactClass = "CardTitle";

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    tag,
    [@bs.optional]
    cssModule,
    [@bs.optional]
    className: string,
  };

  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=view,
      ~props=props(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};