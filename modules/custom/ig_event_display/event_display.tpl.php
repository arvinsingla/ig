<div data-ng-app="eventApp" class="_event-wrapper">
  <div data-ng-controller="eventController">
    <h2 ng-if="title">{{ title }}</h2>
    <ul>
      <li class="item" ng-repeat="item in items" ng-if="currentItemIndex === $index">
        <div class="_photo"><img ng-src="{{ item.item }}" /></div>
<!--        <div class="avatar"><img ng-src="{{ item.profilePicture }}"</div>-->
<!--        <div class="caption">{{ item.caption }}</div>-->
      </li>
    </ul>
  </div>
</div>
